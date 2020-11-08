project(
  'Ornitlogia',
  ['cpp', 'c'],
version : '0.0.0',
meson_version : '>= 0.50.0',
default_options : ['warning_level=2', 'cpp_std=gnu++2a']
)

#Archivos include_directories
pkgincludedir=join_paths(get_option('includedir'),'ornitologia')
fjv_include =include_directories(['src/include/'])

status = [
	'CONSTRUYENDO  EL PROYECTO ORNITOLOGIA',
	]
version_split = meson.project_version().split('.')
MAJOR_VERSION= version_split[0]
MINOR_VERSION= version_split[1]
MICRO_VERSION= version_split[2]

config_data = configuration_data()
config_data.set_quoted('PROYECT_STRING', meson.project_name())
config_data.set('VERSION_MAJOR' , (version_split[0]).to_int())
config_data.set('VERSION_MINOR' , (version_split[1]).to_int())
config_data.set('VERSION_MICRO' , (version_split[2]).to_int())
config_data.set_quoted('VERSION', meson.project_version())


configure_file(output: 'config.h', configuration: config_data)
configuration_inc = include_directories('.')
subdir('src')
message('\n  '.join(status))
