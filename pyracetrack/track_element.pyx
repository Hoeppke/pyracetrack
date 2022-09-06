cimport numpy as np
from libc.math cimport sin


cdef class cTrackElement:

    cdef double width
    cdef double length

    def __init__(self, width):
        self.width = width
        self.length = 0.0

    def get_curvature(self, dist):
        '''
        Compute the curvature of this track element at a point
        '''
        return 0.0

    def get_length(self):
        return self.length


cdef class cStraigtElement(cTrackElement):

    def __init__(self, width, length):
        super().__init__(width)
        self.width = width
        self.length = length

    def get_curvature(self, dist):
        return 0.0

cdef class cCurveElement(cTrackElement):

    cdef double angular_dist
    cdef double radius

    def __init__(self, width, angular_dist, radius):
        super().__init__(width)
        self.angular_dist = angular_dist
        self.radius = radius
        # Initialize rest
