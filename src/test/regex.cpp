#include <string>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <boost/regex.hpp>


int main(int argc, char *argv[])
{
  std::cout << "HEllo world\n";
  if (argc != 2){
    std::cout << "No input file given as argument!" << std::endl;
    return 0;
  }
  std::string fileName;
  if (argc == 2){
    fileName = argv[1];
  }
  std::cout << "Processing file : " << fileName << std::endl;
  std::ifstream msh_file(fileName);
  boost::regex reg_node_header("\\s*(\\d+)\\s(\\d+).?");
  boost::regex reg_node2("(\\d+)\\s(-?\\d+(?:\\.\\d+)?(?:e-\\d+)?)"
      "\\s(-?\\d+(?:\\.\\d+)?(?:e-\\d+)?)"
      "\\s(-?\\d+(?:\\.\\d+)?(?:e-\\d+)?).?");
  boost::regex reg_G_tri("\\s*\\d+\\s+2(?:\\s+\\d+){6}"); // gmsh P1 triangle
  boost::regex entity_gen_head_exp("^\\s*(\\d+)(\\s(\\d+)){3}.?");

  boost::regex easy("\\d.");
  boost::smatch entity_gen_head;
  boost::smatch info2;
  boost::smatch node_head;
  boost::regex reg_ent("\\s*(\\d+)(?:\\s(?:-?\\d+(?:\\.\\d+)?(?:e-\\d+)?)){6}"
                                         "(\\s(\\d+))+\\s?.?");
  boost::smatch ent_info;
  boost::regex test("(\\s?abc){3}");
  boost::smatch test_info;
  int nbNodes;
  int counter = 0;
  for(std::string line; std::getline(msh_file, line);){
    counter++;
    /*
    if(boost::regex_match(line, info2, reg_node2)){
      std::cout << "Node Found" << std::endl;
      std::cout << line << std::endl;
    }
    if(boost::regex_match(line, node_head, reg_node_header)){
      std::cout << "size : " << node_head.size() << std::endl;
      for(int i = 0; i < node_head.size(); ++i) {
        std::cout << "node_head[" << i << "] : " << node_head[i] << std::endl;
      }
    }
    if(boost::regex_match(line, reg_G_tri)){
      std::cout << "line(triangle) : " << line << std::endl;
    }
    if(boost::regex_match(line, entity_gen_head, entity_gen_head_exp)){
      std::cout << "Entitiy found" << std::endl;
      for (int i = 0; i < entity_gen_head.size(); ++i) {
        std::cout << entity_gen_head[i] << std::endl;
      }
    }
    */
    if(boost::regex_match(line, ent_info, reg_ent)){
      std::cout << "Entity Found : " << std::endl;
      boost::regex itRe("(\\s(?:-?\\d+(?:\\.\\d+)?(?:e-\\d+)?))");
      boost::sregex_iterator itNb(line.begin(), line.end(), itRe);
      boost::sregex_iterator end;
      for(itNb; itNb != end; ++itNb){
        std::cout << (*itNb)[1] << "\n";
      }
    }
    if (boost::regex_match(line, test_info, test)){
      std::cout << "Test found " << std::endl;
      std::cout << "size : " << test_info.size() << std::endl;
      for (int i = 0; i < test_info.size(); ++i) {
        std::cout << test_info[i] << std::endl;
      }
      boost::regex re("\\s?(abc)");
      boost::sregex_iterator res(line.begin(), line.end(), re);
      boost::sregex_iterator end;
      for(res; res != end; ++res){
        std::cout << (*res)[1] << std::endl;
      }
    }
  }
}
