#pragma once

class CAnimGraphDoc_ContainerNodeBase : public CAnimGraphDoc_Node /*0x0*/  // sizeof 0x70, align 0xFF [vtable abstract] (animgraphdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x48]; // offset 0x0
    AnimNodeID m_inputNodeID; // offset 0x48, size 0x4, align 4 | MPropertySuppressField
    AnimNodeID m_outputNodeID; // offset 0x4C, size 0x4, align 4 | MPropertySuppressField
    CUtlHashtable< AnimNodeOutputID, CAnimGraphDoc_NodeConnection > m_inputConnectionMap; // offset 0x50, size 0x20, align 8 | MPropertySuppressField
};
