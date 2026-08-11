#pragma once

class CCitadel_Ability_Tier2Boss_LaserBeam : public CCitadelBaseAbilityServerOnly /*0x0*/  // sizeof 0x1010, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xFF0]; // offset 0x0
    AttachmentHandle_t m_hAttackPosHigh; // offset 0xFF0, size 0x1, align 255
    AttachmentHandle_t m_hAttackPosLow; // offset 0xFF1, size 0x1, align 255
    AttachmentHandle_t m_hAttackPosLeft; // offset 0xFF2, size 0x1, align 255
    AttachmentHandle_t m_hAttackPosRight; // offset 0xFF3, size 0x1, align 255
    GameTime_t m_tCastCompleteTime; // offset 0xFF4, size 0x4, align 255
    CModifierHandleTyped< CCitadelModifier > m_pBeamModifier; // offset 0xFF8, size 0x18, align 8
};
