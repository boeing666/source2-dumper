#pragma once

class CEconEntity : public CBaseAnimatingOverlay /*0x0*/, public IHasAttributes /*0x878*/  // sizeof 0x9D8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x890]; // offset 0x0
    CAttributeContainer m_AttributeManager; // offset 0x890, size 0x140, align 255
    CHandle< CBaseEntity > m_hOldProvidee; // offset 0x9D0, size 0x4, align 4
    int32 m_iOldOwnerClass; // offset 0x9D4, size 0x4, align 4
};
