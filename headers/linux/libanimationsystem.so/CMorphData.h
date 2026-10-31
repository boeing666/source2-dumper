#pragma once

class CMorphData  // sizeof 0x20, align 0x8 (modellib) {MGetKV3ClassDefaults}
{
public:
    CUtlString m_name; // offset 0x0, size 0x8, align 8
    CUtlVector< CMorphRectData > m_morphRectDatas; // offset 0x8, size 0x18, align 8
};
