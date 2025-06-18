##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=BMAcolculator
ConfigurationName      :=Debug
WorkspaceConfiguration :=Debug
WorkspacePath          :=C:/Users/bekhr/Workspaces/Workspace1
ProjectPath            :=C:/Users/bekhr/Workspaces/Workspace1/BMAcolculator
IntermediateDirectory  :=../build-$(WorkspaceConfiguration)/BMAcolculator
OutDir                 :=$(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=N.Bekhruzbek
Date                   :=16/03/2025
CodeLitePath           :="C:/Program Files/CodeLite"
MakeDirCommand         :=mkdir -p
LinkerName             :=C:/cygwin64/bin/gcc.exe
SharedObjectLinkerName :=C:/cygwin64/bin/gcc.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputDirectory        :=C:/Users/bekhr/Workspaces/Workspace1/build-$(WorkspaceConfiguration)/bin
OutputFile             :=..\build-$(WorkspaceConfiguration)\bin\$(ProjectName).exe
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
RcCmpOptions           := 
RcCompilerName         :=windres
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overridden using an environment variable
##
AR       := C:/cygwin64/bin/ar.exe rcu
CXX      := C:/cygwin64/bin/x86_64-pc-cygwin-g++.exe
CC       := C:/cygwin64/bin/gcc.exe
CXXFLAGS :=  -gdwarf-2 -O0 -Wall $(Preprocessors)
CFLAGS   :=  -gdwarf-2 -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/cygwin64/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/BMAcalculator.c$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) "$(IntermediateDirectory)"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "$(IntermediateDirectory)"
	@$(MakeDirCommand) "$(OutputDirectory)"

$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "$(IntermediateDirectory)"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/BMAcalculator.c$(ObjectSuffix): BMAcalculator.c $(IntermediateDirectory)/BMAcalculator.c$(DependSuffix)
	$(CC) $(SourceSwitch) "C:/Users/bekhr/Workspaces/Workspace1/BMAcolculator/BMAcalculator.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/BMAcalculator.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/BMAcalculator.c$(DependSuffix): BMAcalculator.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/BMAcalculator.c$(ObjectSuffix) -MF$(IntermediateDirectory)/BMAcalculator.c$(DependSuffix) -MM BMAcalculator.c

$(IntermediateDirectory)/BMAcalculator.c$(PreprocessSuffix): BMAcalculator.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/BMAcalculator.c$(PreprocessSuffix) BMAcalculator.c


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


