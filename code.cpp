 else if (line.find("EVENODD") != string::npos)
      fr = FillRule::EvenOdd;
    else if (line.find("NONZERO") != string::npos)
      fr = FillRule::NonZero ;
    else if (line.find("POSITIVE") != string::npos)
      fr = FillRule::Positive;
    else if (line.find("NEGATIVE") != string::npos)
      fr = FillRule::Negative;
    else if (line.find("SOL_AREA") != string::npos)
    {
      string::const_iterator s_it, s_end = line.cend();
      s_it = (line.cbegin() + 10);
      GetInt(s_it, s_end, area);
    }//yes
    else if (line.find("SOL_COUNT") != string::npos)
    {
      string::const_iterator s_it, s_end = line.cend();
      s_it = (line.cbegin() + 11);
      GetInt(s_it, s_end, count);
    }
    else if (line.find("SUBJECTS_OPEN") != string::npos)
    {//good
      GetPaths(source, subj_open);
    }
    else if (line.find("SUBJECTS") != string::npos)
    {
      GetPaths(source, subj);
    }
    else if (line.find("CLIPS") != string::npos)
    {
      GetPaths(source, clip);
    }
