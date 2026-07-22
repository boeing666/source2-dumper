#pragma once

struct ParticlePreviewState_t  // sizeof 0x70, align 0x8 (particles) {MGetKV3ClassDefaults}
{
    CUtlString m_previewModel; // offset 0x0, size 0x8, align 8
    uint32 m_nModSpecificData; // offset 0x8, size 0x4, align 4
    PetGroundType_t m_groundType; // offset 0xC, size 0x4, align 4
    CUtlString m_sequenceName; // offset 0x10, size 0x8, align 8
    int32 m_nFireParticleOnSequenceFrame; // offset 0x18, size 0x4, align 4
    char _pad_001C[0x4]; // offset 0x1C
    CUtlString m_hitboxSetName; // offset 0x20, size 0x8, align 8
    CUtlString m_materialGroupName; // offset 0x28, size 0x8, align 8
    CUtlVector< ParticlePreviewBodyGroup_t > m_vecBodyGroups; // offset 0x30, size 0x18, align 8
    float32 m_flPlaybackSpeed; // offset 0x48, size 0x4, align 4
    float32 m_flParticleSimulationRate; // offset 0x4C, size 0x4, align 4
    bool m_bShouldDrawHitboxes; // offset 0x50, size 0x1, align 1
    bool m_bShouldDrawAttachments; // offset 0x51, size 0x1, align 1
    bool m_bShouldDrawAttachmentNames; // offset 0x52, size 0x1, align 1
    bool m_bShouldDrawControlPointAxes; // offset 0x53, size 0x1, align 1
    bool m_bAnimationNonLooping; // offset 0x54, size 0x1, align 1
    bool m_bSequenceNameIsAnimClipPath; // offset 0x55, size 0x1, align 1
    char _pad_0056[0x2]; // offset 0x56
    Vector m_vecPreviewGravity; // offset 0x58, size 0xC, align 4
    Vector m_vecPreviewWind; // offset 0x64, size 0xC, align 4
};
