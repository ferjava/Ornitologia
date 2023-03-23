

test_source = (['cFechaTest.cc',
                'cObservacionTest.cc',
                'CFjvApplicationTest.cpp',
                'fjvtest.cc',
                ])



#dependencia de cpputest
cppUTest_dep =[ dependency('cpputest'),
                dependency('libyui'),
                    ]   
#añadimos los obj
test_fjv_src = [fjv_sources ,
                test_source ]


#creacion del ejecutable

e = executable( 'fjvtest' ,test_fjv_src ,include_directories:fjv_include ,
dependencies :cppUTest_dep)
test('cFechaTest',e,suite:'cFecha')
test('cObservacionTest',e,suite:'cObservacion')
test('CFjvApplicationTest',e,suite:'cFjvApplication')
