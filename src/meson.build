
fjv_sources = (['fjv/control/cFecha.cpp'

                    ])
sources = [fjv_sources ,
            'main.cpp']

test_fecha_src = (['fjv/control/cFecha.cpp',
                   'fjv/control/cObservacion.cpp',
                   'test/cFechaTest.cc',
                   'test/cObservacionTest.cc',
                   'cppTest.cc'])

           
executable('example1', sources ,  include_directories:fjv_include , install : true)
 
cppUTest_dep = dependency('cpputest')
e = executable( 'testcFecha' ,test_fecha_src ,include_directories:fjv_include ,
dependencies :cppUTest_dep)
test('cFechaTest',e,suite:'cFecha') 
test('cObservacionTest',e,suite:'cObservacion')
