fjv_include =include_directories(['fjv/control',
                                  'fjv/'])
fjv_sources = (['fjv/control/cFecha.cpp'
                    ])
sources = [fjv_sources ,
            'main.cpp']
test_src = (['fjv/control/testcFecha.cpp',
              'fjv/control/cFecha.cpp',  
             'test.cc'
             ])
cppunit_dep = dependency ('cppunit')             
executable('example1', sources ,  include_directories:fjv_include , install : true)
e = executable( 'testcFecha' , test_src ,include_directories:fjv_include ,dependencies :cppunit_dep )
test('cFecha_Test',e) 
