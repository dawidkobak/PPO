#!/bin/bash
read arg1
touch ${arg1}.cpp
touch ${arg1}.h
echo -n "#ifndef " >> ${arg1}.h
echo -n ${arg1} |tr /a-z/ /A-Z/ >>${arg1}.h
echo "_H" >> ${arg1}.h
echo -n "#define " >>${arg1}.h
echo -n ${arg1} |tr /a-z/ /A-Z/ >>${arg1}.h
echo "_H" >> ${arg1}.h
echo "" >> ${arg1}.h
echo "" >> ${arg1}.h
echo "" >> ${arg1}.h
echo "#endif" >> ${arg1}.h
echo "#include <iostream> " >> ${arg1}.cpp
echo -n "#include \"" >> ${arg1}.cpp
echo -n ${arg1} >> ${arg1}.cpp
echo ".h\"" >> ${arg1}.cpp
echo "" >> ${arg1}.cpp
echo "using namespace std;" >> ${arg1}.cpp



