#pragma once

class CVMixToolDoc  // sizeof 0x68, align 0x8 (sounddoc_lib) {MGetKV3ClassDefaults}
{
public:
    CVMixToolEffectsList m_dspPresets; // offset 0x0, size 0x18, align 255 | MKV3TransferName
    CEffectsPreviewList m_effectsPreview; // offset 0x18, size 0x30, align 8
    CUtlVector< CVMixToolGraphEntry > m_graphs; // offset 0x48, size 0x18, align 8 | MKV3TransferName
    CVMixToolEditorData m_editorData; // offset 0x60, size 0x8, align 4 | MKV3TransferName
};
