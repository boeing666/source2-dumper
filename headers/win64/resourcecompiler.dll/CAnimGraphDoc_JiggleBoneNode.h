#pragma once

class CAnimGraphDoc_JiggleBoneNode : public CAnimGraphDoc_Node /*0x0*/  // sizeof 0x60, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x40]; // offset 0x0
    CAnimGraphDoc_NodeConnection m_inputConnection; // offset 0x40, size 0x8, align 4 | MPropertySuppressField
    CUtlVector< CJiggleBoneItem > m_items; // offset 0x48, size 0x18, align 8 | MPropertyFriendlyName MPropertyAutoExpandSelf
};
