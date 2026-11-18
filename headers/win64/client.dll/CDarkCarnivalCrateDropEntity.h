#pragma once

class CDarkCarnivalCrateDropEntity : public C_PhysicsProp /*0x0*/  // sizeof 0xE30, align 0x10 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xDA0]; // offset 0x0
    DOTACrateDropObjectDefID_t m_unDefID; // offset 0xDA0, size 0x4, align 255
    char _pad_0DA4[0xC]; // offset 0xDA4
    float32 m_flAcceleration; // offset 0xDB0, size 0x4, align 4
    float32 m_flMaxSpeed; // offset 0xDB4, size 0x4, align 4
    char _pad_0DB8[0x14]; // offset 0xDB8
    int8 m_nTutorialObject; // offset 0xDCC, size 0x1, align 1
    int8 m_nDisableSpawnRotation; // offset 0xDCD, size 0x1, align 1
    char _pad_0DCE[0x22]; // offset 0xDCE
    float32 m_flPoints; // offset 0xDF0, size 0x4, align 4
    float32 m_flHazardExplosionRadius; // offset 0xDF4, size 0x4, align 4
    float32 m_flExplosionStrength; // offset 0xDF8, size 0x4, align 4
    float32 m_flUpkickExplosionStrength; // offset 0xDFC, size 0x4, align 4
    float32 m_flTriggerDelay; // offset 0xE00, size 0x4, align 4
    float32 m_flTriggeredGravityScale; // offset 0xE04, size 0x4, align 4
    bool m_bHasBeenTriggered; // offset 0xE08, size 0x1, align 1
    bool m_bHazardDefused; // offset 0xE09, size 0x1, align 1
    bool m_bCurrentlyActivated; // offset 0xE0A, size 0x1, align 1
    char _pad_0E0B[0x1]; // offset 0xE0B
    GameTime_t m_flNextPossibleTriggerTime; // offset 0xE0C, size 0x4, align 255
    GameTime_t m_flCreationTime; // offset 0xE10, size 0x4, align 255
    char _pad_0E14[0x4]; // offset 0xE14
    CNewParticleEffect* pDropEffect; // offset 0xE18, size 0x8, align 8
    bool m_bMarkedForDestroy; // offset 0xE20, size 0x1, align 1
    bool m_bHazardRotationApplied; // offset 0xE21, size 0x1, align 1
    char _pad_0E22[0xE]; // offset 0xE22
};
