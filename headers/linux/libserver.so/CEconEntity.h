#pragma once

class CEconEntity : public CBaseAnimatingOverlay /*0x0*/, public IHasAttributes /*0xBB8*/  // sizeof 0xD18, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBD0]; // offset 0x0
    CAttributeContainer m_AttributeManager; // offset 0xBD0, size 0x140, align 255
    CHandle< CBaseEntity > m_hOldProvidee; // offset 0xD10, size 0x4, align 4
    int32 m_iOldOwnerClass; // offset 0xD14, size 0x4, align 4
};
