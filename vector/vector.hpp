#pragma once
template<typename T>
class vector
{
private:
    int m_x,m_y,m_z;
public:
    static int counter_created;
    static int counter_copied;
    Vertex(int x,int y,int z)
    :m_x(x),m_y(y),m_z(z){
        ++counter_created;
        std::cout << "Created!" << Vertex::counter_created << std::endl ;
    }
    Vertex(const Vertex& vertex){
        ++counter_copied;
        std::cout << "Copied!" << Vertex::counter_copied << std::endl ;
    }
    void operator<< (const Vertex&){
        std::cout << this->m_x << '.' << this->m_y << '.' << this->m_z << std::endl;
    }
};