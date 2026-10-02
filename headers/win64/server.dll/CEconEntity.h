#pragma once

class CEconEntity : public CBaseAnimGraph /*0x0*/, public IHasAttributes /*0xAE0*/  // sizeof 0xC60, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xAF8]; // offset 0x0
    CAttributeContainer m_AttributeManager; // offset 0xAF8, size 0x158, align 255
    CHandle< CBaseEntity > m_hOldProvidee; // offset 0xC50, size 0x4, align 4
    int32 m_iOldOwnerClass; // offset 0xC54, size 0x4, align 4
    char _pad_0C58[0x8]; // offset 0xC58
};
