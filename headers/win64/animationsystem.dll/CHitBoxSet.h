#pragma once

class CHitBoxSet  // sizeof 0x30, align 0x8 (modellib) {MGetKV3ClassDefaults}
{
public:
    CUtlString m_name; // offset 0x0, size 0x8, align 8
    uint32 m_nNameHash; // offset 0x8, size 0x4, align 4
    char _pad_000C[0x4]; // offset 0xC
    CUtlVector< CHitBox > m_HitBoxes; // offset 0x10, size 0x18, align 8
    CUtlString m_SourceFilename; // offset 0x28, size 0x8, align 8
};
