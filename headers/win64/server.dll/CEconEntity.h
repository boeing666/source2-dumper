#pragma once

class CEconEntity : public CBaseAnimGraph /*0x0*/, public IHasAttributes /*0xA90*/  // sizeof 0xC10, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xAA8]; // offset 0x0
    CAttributeContainer m_AttributeManager; // offset 0xAA8, size 0x158, align 255
    CHandle< CBaseEntity > m_hOldProvidee; // offset 0xC00, size 0x4, align 4
    int32 m_iOldOwnerClass; // offset 0xC04, size 0x4, align 4
    char _pad_0C08[0x8]; // offset 0xC08
};
