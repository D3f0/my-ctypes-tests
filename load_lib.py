import ctypes


l = ctypes.cdll.LoadLibrary('./libmylib.so.1.0.1')
l.mean.argtypes = [ctypes.c_double, ctypes.c_double]
l.mean.restype = ctypes.c_double
print l.mean(.024,2)
print l.mean(2,1)

l.mayusculas.argtypes = [ctypes.c_char_p, ]
l.mayusculas.restype = ctypes.c_char_p
buff = ctypes.create_string_buffer("Alfa")
print l.mayusculas(buff)