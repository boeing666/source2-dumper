#pragma once

class TagStatus  // sizeof 0x8, align 0x4 [trivial_dtor] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    TagActionStatus m_TagStatus; // offset 0x0, size 0x1, align 1
    char _pad_0001[0x3]; // offset 0x1
    float32 m_flTagStartAnimTime; // offset 0x4, size 0x4, align 4
};
