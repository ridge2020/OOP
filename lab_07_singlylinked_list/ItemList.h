#ifndef ITEMLIST_H
#define ITEMLIST_H

class ItemList {
public:
    ItemList( ) = default;
    std::ostream& write( std::ostream& fout ) const;
    void          add_front( const Item& new_item );

private:
    ItemNode* head = nullptr;
    ItemNode* tail = nullptr;
};
std::ostream& operator<<( std::ostream& fout, const ItemList& list );

#endif