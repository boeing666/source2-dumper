#pragma once

class CSeqBoneMaskList  // sizeof 0x60, align 0x8 (animationsystem) {MGetKV3ClassDefaults}
{
public:
    CBufferString m_sName; // offset 0x0, size 0x10, align 8
    CUtlVector< int16 > m_nLocalBoneArray; // offset 0x10, size 0x18, align 8
    CUtlVector< float32 > m_flBoneWeightArray; // offset 0x28, size 0x18, align 8
    float32 m_flDefaultMorphCtrlWeight; // offset 0x40, size 0x4, align 4
    char _pad_0044[0x4]; // offset 0x44
    CUtlVector< std::pair< CBufferString, float32 > > m_morphCtrlWeightArray; // offset 0x48, size 0x18, align 8
};
