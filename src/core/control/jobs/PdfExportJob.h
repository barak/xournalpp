/*
 * Xournal++
 *
 * A job to export PDF
 *
 * @author Xournal++ Team
 * https://github.com/xournalpp/xournalpp
 *
 * @license GNU GPLv2 or later
 */

#pragma once

#include "BaseExportJob.h"  // for BaseExportJob
#include "filesystem.h"     // for path

class Control;

class PdfExportJob: public BaseExportJob {
public:
    PdfExportJob(Control* control);

protected:
    ~PdfExportJob() override;

public:
    void run() override;

protected:
    void addFilterToDialog(GtkFileChooser* dialog) override;
    void setExtensionFromFilter(fs::path& p, const char* filterName) const override;
};
