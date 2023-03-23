SRC_FJV=('@0@/src/fjv/'.format(meson.source_root()))
SRC_CONTROL=('@0@/src/fjv/control/'.format(meson.source_root()))
fjv_sources = ([SRC_CONTROL + 'cFecha.cpp',
                SRC_CONTROL + 'cObservacion.cpp',
                SRC_CONTROL + 'cLog.cpp',
                SRC_FJV     + 'CFjvApplication.cpp',
                SRC_FJV     + 'cAppDialog.cpp',    
                ])
sources = [fjv_sources ,
            'CAppTest.cpp',
            'main.cpp']

libyui = dependency ('libyui')


executable('example1' , sources , dependencies : libyui ,  include_directories:[fjv_include,configuration_inc], install : true)
 


subdir('test')
