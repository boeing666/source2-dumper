#pragma once

class CAnimKeyData  // sizeof 0x78, align 0x8 (animationsystem) {MGetKV3ClassDefaults}
{
public:
    CBufferString m_name; // offset 0x0, size 0x10, align 8
    CUtlVector< CAnimBone > m_boneArray; // offset 0x10, size 0x18, align 8
    CUtlVector< CAnimUser > m_userArray; // offset 0x28, size 0x18, align 8
    CUtlVector< CBufferString > m_morphArray; // offset 0x40, size 0x18, align 8
    int32 m_nChannelElements; // offset 0x58, size 0x4, align 4
    char _pad_005C[0x4]; // offset 0x5C
    CUtlVector< CAnimDataChannelDesc > m_dataChannelArray; // offset 0x60, size 0x18, align 8
};
