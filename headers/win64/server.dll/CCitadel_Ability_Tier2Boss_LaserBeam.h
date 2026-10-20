#pragma once

class CCitadel_Ability_Tier2Boss_LaserBeam : public CCitadelBaseAbilityServerOnly /*0x0*/  // sizeof 0x1578, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1558]; // offset 0x0
    AttachmentHandle_t m_hAttackPosHigh; // offset 0x1558, size 0x1, align 255
    AttachmentHandle_t m_hAttackPosLow; // offset 0x1559, size 0x1, align 255
    AttachmentHandle_t m_hAttackPosLeft; // offset 0x155A, size 0x1, align 255
    AttachmentHandle_t m_hAttackPosRight; // offset 0x155B, size 0x1, align 255
    GameTime_t m_tCastCompleteTime; // offset 0x155C, size 0x4, align 255
    CModifierHandleTyped< CCitadelModifier > m_pBeamModifier; // offset 0x1560, size 0x18, align 8
};
