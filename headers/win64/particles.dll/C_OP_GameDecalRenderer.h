#pragma once

class C_OP_GameDecalRenderer : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x1CC0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x230]; // offset 0x0
    CGlobalSymbol m_sDecalGroupName; // offset 0x230, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeEditor
    EventTypeSelection_t m_nEventType; // offset 0x238, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_023C[0x4]; // offset 0x23C
    ParticleCollisionMask_t m_nInteractionMask; // offset 0x240, size 0x8, align 8 | MPropertyFriendlyName
    ParticleCollisionGroup_t m_nCollisionGroup; // offset 0x248, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_024C[0x4]; // offset 0x24C
    CPerParticleVecInput m_vecStartPos; // offset 0x250, size 0x6D8, align 8 | MPropertyFriendlyName
    CPerParticleVecInput m_vecEndPos; // offset 0x928, size 0x6D8, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flTraceBloat; // offset 0x1000, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flDecalSize; // offset 0x1178, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_nDecalGroupIndex; // offset 0x12F0, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flDecalRotation; // offset 0x1468, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleVecInput m_vModulationColor; // offset 0x15E0, size 0x6D8, align 8 | MPropertyFriendlyName
    bool m_bUseGameDefaultDecalSize; // offset 0x1CB8, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bRandomDecalRotation; // offset 0x1CB9, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bRandomlySelectDecalInGroup; // offset 0x1CBA, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bNoDecalsOnOwner; // offset 0x1CBB, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bVisualizeTraces; // offset 0x1CBC, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_1CBD[0x3]; // offset 0x1CBD
};
