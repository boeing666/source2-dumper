#pragma once

class CDarkCarnivalCrateDropEntity : public C_PhysicsProp /*0x0*/  // sizeof 0xE40, align 0x10 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xDAC]; // offset 0x0
    DOTACrateDropObjectDefID_t m_unDefID; // offset 0xDAC, size 0x4, align 255
    char _pad_0DB0[0xC]; // offset 0xDB0
    float32 m_flAcceleration; // offset 0xDBC, size 0x4, align 4
    float32 m_flMaxSpeed; // offset 0xDC0, size 0x4, align 4
    char _pad_0DC4[0x14]; // offset 0xDC4
    int8 m_nTutorialObject; // offset 0xDD8, size 0x1, align 1
    int8 m_nDisableSpawnRotation; // offset 0xDD9, size 0x1, align 1
    char _pad_0DDA[0x26]; // offset 0xDDA
    float32 m_flPoints; // offset 0xE00, size 0x4, align 4
    float32 m_flHazardExplosionRadius; // offset 0xE04, size 0x4, align 4
    float32 m_flExplosionStrength; // offset 0xE08, size 0x4, align 4
    float32 m_flUpkickExplosionStrength; // offset 0xE0C, size 0x4, align 4
    float32 m_flTriggerDelay; // offset 0xE10, size 0x4, align 4
    float32 m_flTriggeredGravityScale; // offset 0xE14, size 0x4, align 4
    bool m_bHasBeenTriggered; // offset 0xE18, size 0x1, align 1
    bool m_bHazardDefused; // offset 0xE19, size 0x1, align 1
    bool m_bCurrentlyActivated; // offset 0xE1A, size 0x1, align 1
    char _pad_0E1B[0x1]; // offset 0xE1B
    GameTime_t m_flNextPossibleTriggerTime; // offset 0xE1C, size 0x4, align 255
    GameTime_t m_flCreationTime; // offset 0xE20, size 0x4, align 255
    char _pad_0E24[0x4]; // offset 0xE24
    CNewParticleEffect* pDropEffect; // offset 0xE28, size 0x8, align 8
    bool m_bMarkedForDestroy; // offset 0xE30, size 0x1, align 1
    bool m_bHazardRotationApplied; // offset 0xE31, size 0x1, align 1
    char _pad_0E32[0xE]; // offset 0xE32
};
