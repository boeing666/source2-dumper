#pragma once

class C_AI_MotorServices : public CAI_Component /*0x0*/  // sizeof 0x78, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x48]; // offset 0x0
    StanceType_t m_nCurrentStance; // offset 0x48, size 0x4, align 4
    char _pad_004C[0x4]; // offset 0x4C
    CGlobalSymbol m_sSharedPoseSlotID; // offset 0x50, size 0x8, align 8 | MNotSaved
    C_NetworkUtlVectorBase< CTransform > m_vecSharedPoseParentSpace; // offset 0x58, size 0x18, align 8 | MNotSaved
    char _pad_0070[0x8]; // offset 0x70
};
