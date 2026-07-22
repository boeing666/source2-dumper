#pragma once

class CChoiceInstanceData  // sizeof 0x34, align 0x4 [trivial_dtor] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CAnimNetVar< int32 > m_currentChoice; // offset 0x10, size 0xC, align 4
    int32 m_previousChoice; // offset 0x1C, size 0x4, align 4
    CAnimNetVar< float32 > m_flClipStartTime; // offset 0x20, size 0xC, align 4
    float32 m_choicePreviousCycle; // offset 0x2C, size 0x4, align 4
    char _pad_0030[0x4]; // offset 0x30
};
