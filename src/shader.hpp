#pragma once

#include <glad/glad.h>

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

class Shader {
private:
  void m_checkCompileErrors(unsigned int shader, std::string type) const;

public:
  unsigned int ID;

  Shader(const char *vertexPath, const char *fragmentPath);
  void use() const;

  void setBool(const std::string &name, bool value) const;
  void setInt(const std::string &name, int value) const;
  void setFloat(const std::string &name, float value) const;
};