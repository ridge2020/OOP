/**
 * @file CSZNode.cpp
 *
 * has  CZNnode class function defintions and implenmentations
 * 
 * 
 */
#include"CSZNode.h"

/**
     * set a new left
     * 
     * @return none
     */
void CSZNode::set_left(CSZNode* new_left ){
    left = new_left;
}

/**
     * set a new right
     * 
     * @return none
     */
void CSZNode::set_right( CSZNode* new_right ){
    right = new_right;
}

/**
     * gets payload
     * 
     * @return payload
     */
CityStateZip CSZNode::get_data( ) const{
    return payload;
}

/**
     * gets left
     * 
     * @return left
     */
CSZNode*     CSZNode::get_left( ) const{
    return left;
}

/**
     * gets right
     * 
     * @return right
     */
CSZNode*     CSZNode::get_right( ) const{
    return right;
}

/**
     * writes the payload to the specified stream in 
     * a standard format
     * 
     * @param  fout the output stream to write to
     * @return     none
     */
void CSZNode::write( std::ostream& fout ) const{
    payload.write(fout);
}

/**
     *overloaded operator for comapring nodes by string name
     * 
     * @param  op2 CSZNode
     * @return      answer (boolean)
     */
bool CSZNode::operator < (const CSZNode& op2) const{
    bool answer = false;
    if(payload.city() < op2.payload.city()){
        answer = true;
    }
    return answer;
}

/**
     * writes the payload to the specified stream in 
     * a standard format using << operator
     * 
     * @param  fout the output stream to write to
     * @param CSZNode n
     * @return     fout
     */
std::ostream& operator<<( std::ostream& fout, const CSZNode& n ){
    n.write(fout);
    return fout;
}

