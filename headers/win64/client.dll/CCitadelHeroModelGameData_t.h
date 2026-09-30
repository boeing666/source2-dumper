#pragma once

struct CCitadelHeroModelGameData_t  // sizeof 0x140, align 0x8 (client) {MModelGameData MGetKV3ClassDefaults MPropertyFriendlyName}
{
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_hAmbientParticle; // offset 0x0, size 0xE0, align 8 | MPropertyStartGroup
    CUtlVector< AmbientParticleSettings_t > m_vecAmbientParticleSettings; // offset 0xE0, size 0x18, align 8
    CUtlString m_strZiplineAttachFX_AttachmentName; // offset 0xF8, size 0x8, align 8 | MPropertyDescription MPropertyCustomFGDType
    bool m_bTurnToFaceVelocity; // offset 0x100, size 0x1, align 1 | MPropertyStartGroup MPropertyDescription
    char _pad_0101[0x3]; // offset 0x101
    float32 m_flTurnThreshold; // offset 0x104, size 0x4, align 4 | MPropertySuppressExpr
    float32 m_flTurnDuration; // offset 0x108, size 0x4, align 4 | MPropertySuppressExpr
    EHeroAimAnimSet m_eUniqueAims; // offset 0x10C, size 0x1, align 1 | MPropertyDescription
    char _pad_010D[0x3]; // offset 0x10D
    float32 m_flStepHeight; // offset 0x110, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flCollisionRadius; // offset 0x114, size 0x4, align 4 | MPropertyDescription
    float32 m_flCollisionHeight; // offset 0x118, size 0x4, align 4
    float32 m_flLookTargetMaxDistance; // offset 0x11C, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flLookTargetMaxAngleUp; // offset 0x120, size 0x4, align 4
    float32 m_flLookTargetMaxAngleDown; // offset 0x124, size 0x4, align 4
    float32 m_flLookTargetMaxAngleLeft; // offset 0x128, size 0x4, align 4
    float32 m_flLookTargetMaxAngleRight; // offset 0x12C, size 0x4, align 4
    float32 m_flLookTargetMaxAngleScaleWhileJumping; // offset 0x130, size 0x4, align 4
    float32 m_flLookTargetMaxAngleScaleWhileRunning; // offset 0x134, size 0x4, align 4
    float32 m_flArtistGestureDrawingScale; // offset 0x138, size 0x4, align 4 | MPropertyStartGroup
    char _pad_013C[0x4]; // offset 0x13C
};
