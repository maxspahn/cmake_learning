# The regex executable searches in a given input file for patterns.
#   This is the basic idea behind regex. In order to make sure, that the
#   user can test the executable, a input file is provided. This needs
#   to be 'copied' to the binary folder so that the usage is easy. Otherwise
#   you would be forced to give the entire path to the input file.
configure_file(2d_quads.msh ${merleMax_SOURCE_DIR}/bin/2d_quads.msh)
