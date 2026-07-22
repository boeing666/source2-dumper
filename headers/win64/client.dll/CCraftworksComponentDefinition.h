#pragma once

class CCraftworksComponentDefinition  // sizeof 0x40, align 0x8 (client) {MGetKV3ClassDefaults}
{
public:
    CraftworksComponentID_t m_unComponentID; // offset 0x0, size 0x1, align 255
    char _pad_0001[0x7]; // offset 0x1
    CUtlString m_strComponentLocName; // offset 0x8, size 0x8, align 8
    CUtlString m_strComponentLocDesc; // offset 0x10, size 0x8, align 8
    CPanoramaImageName m_strComponentImageSmall; // offset 0x18, size 0x10, align 8
    CPanoramaImageName m_strComponentImageMedium; // offset 0x28, size 0x10, align 8
    CUtlString m_strSound; // offset 0x38, size 0x8, align 8
};
