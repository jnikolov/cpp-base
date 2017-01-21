from conans import ConanFile, CMake

class SampleAppConan(ConanFile):
    settings = "os", "compiler", "build_type", "arch"
    requires = "" #comma separated list
    generators = "cmake"
    default_options = "" #comma separated list

#    def imports(self):
#        self.copy("*.dll", dst="bin", src="bin") # From bin to bin
