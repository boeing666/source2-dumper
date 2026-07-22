#pragma once

class CAnimEncodeDifference  // sizeof 0xA8, align 0x8 (animationsystem) {MGetKV3ClassDefaults}
{
public:
    CUtlVector< CAnimBoneDifference > m_boneArray; // offset 0x0, size 0x18, align 8
    CUtlVector< CAnimMorphDifference > m_morphArray; // offset 0x18, size 0x18, align 8
    CUtlVector< CAnimUserDifference > m_userArray; // offset 0x30, size 0x18, align 8
    CUtlVector< uint8 > m_bHasRotationBitArray; // offset 0x48, size 0x18, align 8
    CUtlVector< uint8 > m_bHasMovementBitArray; // offset 0x60, size 0x18, align 8
    CUtlVector< uint8 > m_bHasMorphBitArray; // offset 0x78, size 0x18, align 8
    CUtlVector< uint8 > m_bHasUserBitArray; // offset 0x90, size 0x18, align 8
};
