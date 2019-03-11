#ifndef ITEMNODE_H
#define ITEMNODE_H
#include"Item.h"

class ItemNode {
public:
    ItemNode( const Item& new_item ) : payload{new_item} {};
    Item          get_item( ) const;
    ItemNode*     get_next( ) const;
    void          set_next( ItemNode* node );
    std::ostream& write( std::ostream& fout ) const;

private:
    Item      payload;
    ItemNode* next = nullptr;
};
std::ostream& operator<<( std::ostream& fout, const ItemNode& node );

#endif