#pragma once

class CEconEntity : public CBaseAnimGraph /*0x0*/, public IHasAttributes /*0xA40*/  // sizeof 0xEB0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xA58]; // offset 0x0
    CAttributeContainer m_AttributeManager; // offset 0xA58, size 0x438, align 255
    uint32 m_OriginalOwnerXuidLow; // offset 0xE90, size 0x4, align 4
    uint32 m_OriginalOwnerXuidHigh; // offset 0xE94, size 0x4, align 4
    int32 m_nFallbackPaintKit; // offset 0xE98, size 0x4, align 4
    int32 m_nFallbackSeed; // offset 0xE9C, size 0x4, align 4
    float32 m_flFallbackWear; // offset 0xEA0, size 0x4, align 4
    int32 m_nFallbackStatTrak; // offset 0xEA4, size 0x4, align 4
    CHandle< CBaseEntity > m_hOldProvidee; // offset 0xEA8, size 0x4, align 4
    int32 m_iOldOwnerClass; // offset 0xEAC, size 0x4, align 4
};
