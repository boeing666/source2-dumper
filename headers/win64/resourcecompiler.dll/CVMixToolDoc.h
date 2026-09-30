#pragma once

class CVMixToolDoc  // sizeof 0x70, align 0x8 (sounddoc_lib) {MGetKV3ClassDefaults}
{
public:
    CVMixToolEffectsList m_dspPresets; // offset 0x0, size 0x20, align 8 | MKV3TransferName
    CEffectsPreviewList m_effectsPreview; // offset 0x20, size 0x30, align 8
    CUtlVector< CVMixToolGraphEntry > m_graphs; // offset 0x50, size 0x18, align 8 | MKV3TransferName
    CVMixToolEditorData m_editorData; // offset 0x68, size 0x8, align 4 | MKV3TransferName
};
