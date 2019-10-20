DESCRIPTION = "An image to build rust for Sailfish"

#require core-image-minimal.bb 
require recipes-core/images/core-image-minimal.bb
 
#CORE_IMAGE_EXTRA_INSTALL += "ldd"

#IMAGE_INSTALL_append = " rust"
#IMAGE_INSTALL_append = " rust-hello-world"
IMAGE_INSTALL_append = " librespot"
