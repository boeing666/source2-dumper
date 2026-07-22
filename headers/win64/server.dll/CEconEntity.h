#pragma once

class CEconEntity : public CBaseAnimGraph /*0x0*/, public IHasAttributes /*0x960*/  // sizeof 0xC90, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x978]; // offset 0x0
    CAttributeContainer m_AttributeManager; // offset 0x978, size 0x2F8, align 255
    uint32 m_OriginalOwnerXuidLow; // offset 0xC70, size 0x4, align 4
    uint32 m_OriginalOwnerXuidHigh; // offset 0xC74, size 0x4, align 4
    int32 m_nFallbackPaintKit; // offset 0xC78, size 0x4, align 4
    int32 m_nFallbackSeed; // offset 0xC7C, size 0x4, align 4
    float32 m_flFallbackWear; // offset 0xC80, size 0x4, align 4
    int32 m_nFallbackStatTrak; // offset 0xC84, size 0x4, align 4
    CHandle< CBaseEntity > m_hOldProvidee; // offset 0xC88, size 0x4, align 4
    int32 m_iOldOwnerClass; // offset 0xC8C, size 0x4, align 4
};
