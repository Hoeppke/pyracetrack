#include <pybind11/pybind11.h>

namespace py = pybind11;

class Vec2D{
    public:
        Vec2D(double x, double y){
            _x = x;
            _y = y;
        }
        void set_vals(double x, double y){
            _x = x;
            _y = y;
        }
        double get_x(){
            return _x;
        }
        double get_y(){
            return _y;
        }
    private:
        double _x;
        double _y;
}

/**@numba.jit(nopython=True)
def lineRayIntersectionPoint(rayOrigin, rayDirection, point1, point2):
    # Ray-Line Segment Intersection Test in 2D
    # http://bit.ly/1CoxdrG
    v1 = rayOrigin - point1
    v2 = point2 - point1
    v3 = np.array([-rayDirection[1], rayDirection[0]])
    t1 = cross(v2, v1) / np.dot(v2, v3)
    t2 = np.dot(v1, v3) / np.dot(v2, v3)
    if t1 >= 0.0 and t2 >= 0.0 and t2 <= 1.0:
        return rayOrigin + t1 * rayDirection, True
    else:
        return rayOrigin, False

@numba.jit(nopython=True)
def get_ray_intersections(ray_start, ray_end, starts, ends):
    num_lines = starts.shape[0]
    ipoints = np.zeros((num_lines, 2))
    valids = np.zeros(num_lines, dtype='bool')
    for i in range(num_lines):
        b1 = starts[i, :]
        b2 = ends[i, :]
        line_len = np.linalg.norm(b2 - b1)
        line_vec = (b2 - b1) / line_len
        point, valid = lineRayIntersectionPoint(ray_start, ray_end, b1, b2)
        if valid:
            ipoints[i, :] = point
        valids[i] = valid 
    return ipoints, valids
**/

