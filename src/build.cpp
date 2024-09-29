#include <LF_move.hpp>
#include <cstdio>

// Assumes <filename>.bwt exists
int main(int argc, char *const argv[])
{
    if (argc < 2)
    {
        std::cerr << "Usage: " << argv[0] << " <filename>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];

    std::string bwt_fname = filename + ".bwt";
    std::ifstream ifs_bwt(bwt_fname);

    ifs_bwt.seekg(0);
    cout << "Reading BWT from " << bwt_fname << std::endl;
    LF_move tbl(ifs_bwt);

    tbl.bwt_stats();

    std::string tbl_outfile = filename + tbl.get_file_extension();
    std::ofstream out_fp(tbl_outfile);
    tbl.serialize(out_fp);
    out_fp.close();

    return 0;
}