#pragma once

class CPhysSurfacePropertiesSoundNames  // sizeof 0x60, align 0x8 (modellib) {MGetKV3ClassDefaults}
{
public:
    CUtlString m_impactSoft; // offset 0x0, size 0x8, align 8 | MKV3TransferName
    CUtlString m_impactHard; // offset 0x8, size 0x8, align 8 | MKV3TransferName
    CUtlString m_scrapeSmooth; // offset 0x10, size 0x8, align 8 | MKV3TransferName
    CUtlString m_scrapeRough; // offset 0x18, size 0x8, align 8 | MKV3TransferName
    CUtlString m_bulletImpact; // offset 0x20, size 0x8, align 8 | MKV3TransferName
    CUtlString m_rolling; // offset 0x28, size 0x8, align 8 | MKV3TransferName
    CUtlString m_break; // offset 0x30, size 0x8, align 8 | MKV3TransferName
    CUtlString m_strain; // offset 0x38, size 0x8, align 8 | MKV3TransferName
    CUtlString m_meleeImpact; // offset 0x40, size 0x8, align 8 | MKV3TransferName
    CUtlString m_pushOff; // offset 0x48, size 0x8, align 8 | MKV3TransferName
    CUtlString m_skidStop; // offset 0x50, size 0x8, align 8 | MKV3TransferName
    CUtlString m_resonant; // offset 0x58, size 0x8, align 8 | MKV3TransferName
};
