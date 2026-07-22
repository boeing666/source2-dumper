#pragma once

class CNewParticleEffect : public IParticleEffect /*0x0*/  // sizeof 0xD8, align 0xFF [vtable] (particleslib)
{
public:
    uint8_t m_bShouldCheckFoW : 1; // offset 0x0
    uint8_t m_bFreezeTargetState : 1; // offset 0x0
    uint8_t m_bFreezeTransitionActive : 1; // offset 0x0
    uint8_t m_bIsAsyncCreate : 1; // offset 0x0
    uint8_t m_bDontRemove : 1; // offset 0x0
    uint8_t m_bRemove : 1; // offset 0x0
    uint8_t m_bNeedsBBoxUpdate : 1; // offset 0x0
    uint8_t m_bIsFirstFrame : 1; // offset 0x0
    uint8_t m_bAutoUpdateBBox : 1; // offset 0x0
    uint8_t m_bAllocated : 1; // offset 0x0
    uint8_t m_bSimulate : 1; // offset 0x0
    uint8_t m_bShouldPerformCullCheck : 1; // offset 0x0
    uint8_t m_bForceNoDraw : 1; // offset 0x0
    uint8_t m_bSuppressScreenSpaceEffect : 1; // offset 0x0
    uint8_t m_bShouldSave : 1; // offset 0x0
    uint8_t m_bShouldSimulateDuringGamePaused : 1; // offset 0x0
    uint8_t m_bCanFreeze : 1; // offset 0x0
    char _pad_0001[0xF]; // offset 0x1
    CNewParticleEffect* m_pNext; // offset 0x10, size 0x8, align 8
    CNewParticleEffect* m_pPrev; // offset 0x18, size 0x8, align 8
    IParticleCollection* m_pParticles; // offset 0x20, size 0x8, align 8
    char* m_pDebugName; // offset 0x28, size 0x8, align 8
    char _pad_0030[0x10]; // offset 0x30
    Vector m_vSortOrigin; // offset 0x40, size 0xC, align 4
    float32 m_flScale; // offset 0x4C, size 0x4, align 4
    PARTICLE_EHANDLE__* m_hOwner; // offset 0x50, size 0x8, align 8
    CParticleProperty* m_pOwningParticleProperty; // offset 0x58, size 0x8, align 8
    char _pad_0060[0x10]; // offset 0x60
    float32 m_flFreezeTransitionStart; // offset 0x70, size 0x4, align 4
    float32 m_flFreezeTransitionDuration; // offset 0x74, size 0x4, align 4
    float32 m_flFreezeTransitionOverride; // offset 0x78, size 0x4, align 4
    Vector m_LastMin; // offset 0x7C, size 0xC, align 4
    Vector m_LastMax; // offset 0x88, size 0xC, align 4
    CSplitScreenSlot m_nSplitScreenUser; // offset 0x94, size 0x4, align 4
    Vector m_vecAggregationCenter; // offset 0x98, size 0xC, align 4
    char _pad_00A4[0x2C]; // offset 0xA4
    int32 m_RefCount; // offset 0xD0, size 0x4, align 4
    char _pad_00D4[0x4]; // offset 0xD4
};
