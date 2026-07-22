#pragma once

class CAnimParamHandleMap  // sizeof 0x20, align 0x8 (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    CUtlHashtable< uint16, int16 > m_list; // offset 0x0, size 0x20, align 8
};
