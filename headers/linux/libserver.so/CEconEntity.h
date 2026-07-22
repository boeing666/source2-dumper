#pragma once

class CEconEntity : public CBaseAnimatingOverlay /*0x0*/, public IHasAttributes /*0xA70*/  // sizeof 0xBD0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA88]; // offset 0x0
    CAttributeContainer m_AttributeManager; // offset 0xA88, size 0x140, align 255
    CHandle< CBaseEntity > m_hOldProvidee; // offset 0xBC8, size 0x4, align 4
    int32 m_iOldOwnerClass; // offset 0xBCC, size 0x4, align 4
};
