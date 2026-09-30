#pragma once

class CAI_Senses : public CAI_Component /*0x0*/  // sizeof 0x100, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x48]; // offset 0x0
    NPCSensingCategoryMask_t m_nSensedCategories; // offset 0x48, size 0x4, align 255
    AI_SensingFlags_t m_iSensingFlags; // offset 0x4C, size 0x4, align 4
    AI_VolumetricEventFlags_t m_nExclusionFlags; // offset 0x50, size 0x2, align 2
    char _pad_0052[0x2]; // offset 0x52
    float32 m_flSensingSensitivity; // offset 0x54, size 0x4, align 4
    CAI_VolumetricEvent* m_pCachedTaskEvent; // offset 0x58, size 0x8, align 8
    AI_VolumetricEventTypeMask_t m_nSensingInterests; // offset 0x60, size 0x8, align 8
    CUtlVectorFixedGrowable< AI_VolumetricEventHandle_t, 16 > m_vecAudibleEvents; // offset 0x68, size 0x98, align 8 | MNotSaved
};
