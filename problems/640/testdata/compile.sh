unzip foo.cc >/dev/null 
g++ a.cpp -o a -O2 -std=c++14
g++ b.cpp -o b -O2 -std=c++14
zip foo a >/dev/null 
zip -u foo b >/dev/null 
mv foo.zip foo